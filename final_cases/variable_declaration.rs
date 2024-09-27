fn test_variable_declaration() {
    let x: i32 = 10;   
    let mut y: i32 = 20;
    let z = x + y;     
    y = z;             
    assert_eq!(y, 30);
}

fn main() {
    test_variable_declaration(); 
}
