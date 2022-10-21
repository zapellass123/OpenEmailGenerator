<?php

$insert =false;
if(isset($_POST['name'])){
  //Set connection variables
  $server= "localhost";
  $username= "root";
  $password= "root";
  $dbname= "resbuild";

  //Create a database connection
  $con= mysqli_connect($server, $username, $password, $dbname);

  //Connection Success
  if(!$con){
    die("Connection to this database failed due to".mysqli_connect_error());
  }
  $name= $_POST['name'];
  $email= $_POST['email'];
  $branch= $_POST['branch'];
  $highqual= $_POST['highqual'];
  $gender= $_POST['gender'];
  $mobno= $_POST['mobno'];
  $role=$_POST['role'];
  $skills=$_POST['skills'];
  $descr= $_POST['descr'];
  
  $sql= "INSERT INTO `resbuild` (`name`, `email`, `branch`, `highqual`, `gender`, `mobno`, `role`, `skills`,`descr`) VALUES ('$name', '$email', '$branch', '$highqual', '$gender','$mobno','$role','$skills','$descr');";
  //echo "$sql";

  //Execute the query
  if ($con->query($sql) == true){
    $string="Successfully inserted";
   echo '<span style="color: green; font-size: 40px;weight: bold">'.$string.'</span>';
    $insert = true;
  //Flag for successful Insertion  
  }
  else{
    echo "ERROR: $sql <br> $con->error";
  }
  //Close the database connection
  $con->close();
}

 ?>