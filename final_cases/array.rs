fn main() {
    test_array_slice();
}

fn test_array_slice() {
    let arr = [1, 2, 3, 4, 5];
    let first = arr[0];
    let slice = &arr[1..3];
    let len = slice.len();

    println!("第一个元素: {}", first);
    println!("切片长度: {}", len);
}
