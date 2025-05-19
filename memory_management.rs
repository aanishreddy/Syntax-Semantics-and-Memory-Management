fn main() {
    // Dynamically allocating memory on the heap
    let vec = Box::new(vec![1, 2, 3, 4, 5]);

    // Borrowing: `vec` is borrowed by `borrowed_vec`
    let borrowed_vec = &vec;

    // Ownership: Ownership is transferred to `new_vec`
    let new_vec = vec;

    // println!("{:?}", borrowed_vec); // This would cause a compile-time error because `vec`'s ownership is moved to `new_vec`
    
    println!("{:?}", new_vec);
}
