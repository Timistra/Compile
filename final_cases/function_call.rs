fn add(a: i32, b: i32) -> i32 {
    a + b
}

fn test_function_call() {
    let result = add(2, 3);
    println!("The result is: {}", result); 
}

fn main() {
    test_function_call(); 
}
