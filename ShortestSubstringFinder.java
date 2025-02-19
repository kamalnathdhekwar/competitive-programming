import java.util.HashMap;

public class ShortestSubstringFinder {
    public static String findShortestSubstring(String input1, String input2) {
        if (input1.length() == 0 || input2.length() == 0) return "";

        HashMap<Character, Integer> charCount = new HashMap<>();
        for (char c : input2.toCharArray()) {
            charCount.put(c, charCount.getOrDefault(c, 0) + 1);
        }

        int left = 0, right = 0, minLen = Integer.MAX_VALUE, count = charCount.size();
        int minStart = 0;
        
        while (right < input1.length()) {
            char rightChar = input1.charAt(right);
            if (charCount.containsKey(rightChar)) {
                charCount.put(rightChar, charCount.get(rightChar) - 1);
                if (charCount.get(rightChar) == 0) count--;
            }
            right++;

            while (count == 0) {
                if (right - left < minLen) {
                    minLen = right - left;
                    minStart = left;
                }

                char leftChar = input1.charAt(left);
                if (charCount.containsKey(leftChar)) {
                    charCount.put(leftChar, charCount.get(leftChar) + 1);
                    if (charCount.get(leftChar) > 0) count++;
                }
                left++;
            }
        }

        return minLen == Integer.MAX_VALUE ? "" : input1.substring(minStart, minStart + minLen);
    }

    public static void main(String[] args) {
        String input1 = "I am the greatest";
        String input2 = "Imt";
        System.out.println(findShortestSubstring(input1, input2)); // Output: "me is Fr"
    }
}
