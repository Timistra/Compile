fn add(x: i32, y: i32) -> i32 {
    let z: i32 = x + y;
    return z;
}

fn main() {
    let sum = add(5, 10);
    println!("Result of add(5, 10): {}", sum);
}
