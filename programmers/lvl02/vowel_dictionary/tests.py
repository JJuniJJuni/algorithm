from unittest import TestCase
from main import solution

class TestSolution(TestCase):
    def test_solution(self):
        self.assertEqual(6, solution("AAAAE"))
        self.assertEqual(10, solution("AAAE"))
        self.assertEqual(1563, solution("I"))
        self.assertEqual(1189, solution("EIO"))