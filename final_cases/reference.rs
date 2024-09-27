fn reference_example(x: &i32) -> i32 {
    let y: i32 = *x;  // 解引用
    return y;
}

fn main() {
    let x = 42;
    let ref_result = reference_example(&x);
    println!("Result of reference_example(&42): {}", ref_result);
}
