def outer_function():
    x = 10
    def inner_function():
        print(f"Value of x inside closure: {x}")
    return inner_function

closure = outer_function()
closure()
