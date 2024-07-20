import unittest
from main import solution


class TestSolution(unittest.TestCase):
    def test_solution(self):
        self.assertEqual(5, solution([1, 1, 1, 1, 1], 3))
        self.assertEqual(2, solution([4, 1, 2, 1], 4))