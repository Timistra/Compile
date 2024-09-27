fn tuple_access() -> i32 {
    let tup: (i32, i32) = (10, 20);
    let first: i32 = tup.0;
    return first;
}

fn main() {
    let tuple_result = tuple_access();
    println!("Result of tuple_access(): {}", tuple_result);
}
