from unittest import TestCase
from main import solution

class TestSolution(TestCase):
    def test_solution(self):
        self.assertEqual(True, solution("()"))
        self.assertEqual(True, solution("(())"))
        self.assertEqual(False, solution(")())"))
        self.assertEqual(True, solution("()()"))
        self.assertEqual(True, solution("(())()"))
        self.assertEqual(False, solution(")()("))
        self.assertEqual(False, solution("(()("))