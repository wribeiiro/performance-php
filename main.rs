use std::time::Instant;

fn main() {
    let start_time = Instant::now();

    let total = 10_000_000;
    let mut i = 0;

    while i < total {
        _ = i;
        i += 1;
    }

    let elapsed_time = start_time.elapsed().as_secs_f64();
    println!("{}", elapsed_time);
}
