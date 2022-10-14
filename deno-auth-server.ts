// Github repo: https://github.com/iathul/deno-auth-api

import * as bcrypt from 'https://deno.land/x/bcrypt/mod.ts'

import { Application, Router } from 'https://deno.land/x/oak/mod.ts'

import { MongoClient } from 'https://deno.land/x/mongo@v0.7.0/mod.ts'
import { v4 } from 'https://deno.land/std/uuid/mod.ts'

// Database Connection.
const client = new MongoClient()
client.connectWithUri('mongodb://localhost:27017')
const db = client.database('test')
const users = db.collection('users')

// User Register API
const registerUser = async ({
  request,
  response
}: {
  request: any
  response: any
}) => {
  const body = await request.body()
  const user = body.value
  let userExist = await users.findOne({ email: user.email })
  if (userExist) {
    response.body = {
      error: 'Email already exist'
    }
  } else {
    const salt: any = v4.generate()
    const hashePswd: any = await bcrypt.hash(user.password, salt)
    await users.insertOne({
      name: user.name,
      email: user.email,
      password: hashePswd
    })
    response.body = { message: 'Registration Success' }
    response.status = 200
  }
}

// User Login API
const loginUser = async ({
  request,
  response
}: {
  request: any
  response: any
}) => {
  const body = await request.body()
  const user = body.value
  var loggedUser = await users.findOne({ email: user.email })
  if (!loggedUser) {
    response.body = {
      error: 'Email not found'
    }
  }

  var validPswd = await bcrypt.compare(user.password, loggedUser.password)
  if (!validPswd) {
    response.body = {
      error: 'Invalid Password'
    }
  } else {
    response.body = {
      message: 'Login Success'
    }
  }
}

// Get All Users
const getAllUsers = async ({ response }: { response: any }) => {
  let data = await users.find()
  response.body = data
}

// Server
const router = new Router()
const app = new Application()
const PORT = 8080

router
  .post('/register', registerUser)
  .post('/login', loginUser)
  .get('/users', getAllUsers)

app.use(router.routes())
app.use(router.allowedMethods())

await app.listen({ port: PORT })
