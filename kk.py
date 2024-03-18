def solve():
    sorted_array = []

    for num in nums:
        if len(sorted_array) == 0:
            num_str = str(num)
            sorted_digits = [int(digit) for digit in num_str]
            sorted_digits.sort()
            sorted_str = "".join(str(digit) for digit in sorted_digits)
            sorted_num = int(sorted_str)
            if str(sorted_num) == num_str and num > 10:
                for digit_char in num_str:
                    sorted_array.append(int(digit_char))
            else:
                sorted_array.append(num)
        else:
            if num < sorted_array[-1]:
                print("NO")
                return 
            
            num_str = str(num)
            sorted_digits = [int(digit) for digit in num_str]
            sorted_digits.sort()
            sorted_str = "".join(str(digit) for digit in sorted_digits)
            sorted_num = int(sorted_str)

            if sorted_array[-1] < int(num_str[0]) and str(sorted_num) == num_str and num >= 10:
                for digit_char in num_str:
                    sorted_array.append(int(digit_char))
            else:
                sorted_array.append(num)

    for i in range(1, len(sorted_array)):
        if sorted_array[i] < sorted_array[i-1]:
            print("NO")
            return
    print("YES")
    # print(*sorted_array)
    return

if __name__ == "__main__":
    t = int(input())
    while t > 0:
        n = int(input())
        nums = list(map(int, input().split()))
        solve()
        t -= 1
