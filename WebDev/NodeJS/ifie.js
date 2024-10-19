//functions in js look like this

(function bat() {
    const superhero = "batman";
    console.log(superhero, message);
})();  //(); to run it

(function sup(message) {   //using parameter
    const superhero = "superman";
    console.log(superhero, message);
})("Bye");

//MODULE WRAPPERS

/*
Before running a module, NodeJS wraps it with a function
(function(exports, require, module, __filename, --dirname) {
    const superhero = "superman";
    console.log(superhero, message);
})*/
//local variables per module
// __dirname: path to current dir
// __filename: path to current file
// require: function used to import a module by path
// module: reference to current module
