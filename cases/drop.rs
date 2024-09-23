struct Resource {
    value: i32,
}

impl Drop for Resource {
    fn drop(&mut self) {
        println!("Dropping resource with value: {}", self.value);
    }
}

fn test_drop() {
    let r1 = Resource { value: 1 };
    let r2 = Resource { value: 2 };
    drop(r1);  // 手动调用drop
    // r2将会自动在作用域结束时被丢弃
}

fn main() {
    test_drop();  
}
