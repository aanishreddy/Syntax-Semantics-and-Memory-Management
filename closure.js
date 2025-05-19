function outerFunction() {
    let x = 10;
    function innerFunction() {
        console.log(`Value of x inside closure: ${x}`);
    }
    return innerFunction;
}

let closure = outerFunction();
closure();
