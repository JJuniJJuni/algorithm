from unittest import TestCase
from main import solution

class TestSolution(TestCase):
    def test_solution(self):
        self.assertEqual(1, solution([2, 1, 3, 2], 2))
        self.assertEqual(5, solution([1, 1, 9, 1, 1, 1], 0))