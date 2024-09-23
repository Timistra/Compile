fn test_panic() {
    let arr = [1, 2, 3];
    if arr.len() > 5 {
        panic!("Array index out of bounds");
    }
}

fn main() {
    test_panic(); 
}
