fn conditional_example(x: i32) -> bool {
    if x > 10 && x < 20 {
        return true;
    } else {
        return false;
    }
}

fn main() {
    let result = conditional_example(15);
    println!("Result of conditional_example(15): {}", result);
}
