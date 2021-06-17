int countBitsFlip(int a, int b)
{

    // Your logic here
    int count = 0;
    int var = a ^ b;
    for (int i = 0; i < 32; ++i)
    {
        if (var & 1 << i)
            count++;
    }
    return count;
}

// faster way of counting no of bits.
static int countSetBits(int n)
{
    int count = 0;
    while (n != 0)
    {
        count++;
        n &= (n - 1);
    }
    return count;
}

// Function that return count of
// flipped number
static int FlippedCount(int a, int b)
{
    // Return count of set bits in
    // a XOR b
    return countSetBits(a ^ b);
}