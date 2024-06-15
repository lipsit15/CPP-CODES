function greet(name, callback) {
    console.log("Hello", name);
    callback();
}
function callMe() {
    console.log("I am callback function");
}
greet("Lipsit", callMe);

/*
A callback function is defined as a function passed into anather function as a parameter
*/ 