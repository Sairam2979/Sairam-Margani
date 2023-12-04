let mysql = require('mysql2');
let connection = mysql.createConnection(
    {
        host:'localhost',
        user:'root',
        password:'Sairam@2979',
        database : 'fruit'
    }
    );
    connection.connect(function(err){
        if(err)
        throw err;
        console.log("connected");
        connection.query("CREATE DATABASE sai143", function (err) {
            if (err) throw err;
            console.log("Database created");
        }
        );
        var sql ="create table sai456 (name varchar(20),address varchar(250))";
        connection.query(sql, function(err){
            if (err) throw err;
            console.log("Table created");
        });
        
    }
    );
