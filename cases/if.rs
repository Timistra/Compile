fn test_basic_block_if() {
    let a = 5;
    let b = 10;
    let max;

    if a > b {
        max = a;
    } else {
        max = b;
    }

    assert_eq!(max, 10);
}

fn main() {
    test_basic_block_if(); 
}
