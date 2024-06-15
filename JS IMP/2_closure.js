function outerFunction() {
    var outerVariable = "I am from outer function";
    function innerFunction() {
        console.log(outerVariable);
    }
    return innerFunction;
}
var myClosure = outerFunction();
myClosure();

/*
closure means when an inner function has always access to the variable of its outer function,
even after the outer function has returned
*/