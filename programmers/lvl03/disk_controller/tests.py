from unittest import TestCase
from main import solution

class TestSolution(TestCase):
    def test_solution(self):
        self.assertEqual(9, solution([[0, 3], [1, 9], [2, 6]]))
        self.assertEqual(7, solution([[0, 3], [1, 9], [5, 1]]))
        self.assertEqual(6, solution([[0, 5], [1, 2], [5, 5]]))