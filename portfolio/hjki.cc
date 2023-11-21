body {
    text-align: center;
    font-family: 'Times New Roman', Times, serif;
    background-color: black;
    color: white;
    margin: 0;
    padding: 0;
}

li {
    display: inline-block;
    margin-right: 20px;
    background-color: white;
    color: black;
    font-size: 16px;
    cursor: pointer;
    border-radius: 6px;
    
}
a:link, a:visited {
    background-color: white;
    color: black;
    padding: 10px 15px;
    text-align: center;
    text-decoration: none;
    display: inline-block;
    border-radius: 6px;
  }
  
  a:hover, a:active {
    background-color: blueviolet;
    border-radius: 6px;
  }

header {
    background-color: black;
    color: white;
    padding: 20px 0;
}

@media only screen and (max-width: 600px) {
    li {
        display:inline-block ;
        margin-bottom: 10px;
    }