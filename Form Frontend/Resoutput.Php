<?php
$servername = "localhost";
$username = "root";
$password = "root";
$dbname = "resbuild";

// Create connection
$conn = new mysqli($servername, $username, $password, $dbname);
// Check connection
if ($conn->connect_error) {
    die("Connection failed: " . $conn->connect_error);
}

$sql = "SELECT name, email, branch, highqual, gender, mobno, role, skills FROM resbuild;";
$result = $conn->query($sql);

if ($result->num_rows > 0) {
    echo "<table border=2 cellpadding=2 cellspacing=2><tr><th>Name</th><th>Email</th<th>Branch</th><th>Highest Qualification</th><th>Gender</th><th>Mobile Number</th><th>Role</th><th>Skills</th></tr>";
    // output data of each row
    while ($row = $result->fetch_assoc()) {
        echo "<tr><td>" . $row["name"] . "</td><td>" . $row["email"] . "</td><td>" . $row["branch"] . "</td><td>" . $row["highqual"] . "</td><td>" . $row["gender"] . "</td> <td>" . $row["mobno"] .  "</td><td>" . $row["role"] . "</td><td>" . $row["skills"] . "</td><tr></tr>";
    }
    echo "</table>";
} else {
    echo "0 results";
}
$conn->close();