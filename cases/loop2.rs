fn test_loop() {
    let mut sum = 0;
    for i in 1..10 {
        sum += i;
    }
    println!("The sum is: {}", sum); 
}

fn main() {
    test_loop(); 
}
