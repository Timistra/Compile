fn type_cast_example(x: i32) -> f64 {
    let y: f64 = x as f64;
    return y;
}

fn main() {
    let cast_result = type_cast_example(100);
    println!("Result of type_cast_example(100): {}", cast_result);
}
