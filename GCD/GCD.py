from tqdm import tqdm
import time

def gcd(a, b):
    """Calculate the GCD of a and b using the Euclidean algorithm."""
    while b:
        a, b = b, a % b
    return a

def main():
    print("This is a GCD program chatGPT created, please follow the instractions")
    a = int(input("Enter the first number: "))
    b = int(input("Enter the second number: "))
    
    # Show progress for each step of the GCD calculation
    steps = max(a, b)  # Number of iterations (for demonstration)
    
    print("Calculating GCD...")
    for _ in tqdm(range(steps), desc="Progress"):
        time.sleep(0.1)  # Simulating some delay for progress visualization
        # Calculate GCD in a loop to show progress
        gcd(a, b)
    
    result = gcd(a, b)
    print(f"The GCD of {a} and {b} is: {result}")

if __name__ == "__main__":
    main()
