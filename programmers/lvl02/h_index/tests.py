from unittest import TestCase
from main import solution

class TestSolution(TestCase):
    def test_solution(self):
        self.assertEqual(3, solution([3, 0, 6, 1, 5]))
        self.assertEqual(3, solution([1, 2, 3, 3, 3, 3, 4, 4, 5, 6, 7, 7, 8, 8, 9, 9, 10, 10, 10]))
        self.assertEqual(5, solution([100, 200, 300, 400, 500]))
