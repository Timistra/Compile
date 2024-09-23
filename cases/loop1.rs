fn test_loop_and_break() {
    let mut counter = 0;

    loop {
        counter += 1;

        if counter == 10 {
            break;
        }
    }
    
}

fn main() {
    test_loop_and_break(); 
}
