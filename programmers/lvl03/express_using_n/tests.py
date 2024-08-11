import unittest
from main import solution

class TestSolution(unittest.TestCase):
    def test_solution(self):
        self.assertEqual(1, solution(2, 2))
        self.assertEqual(3, solution(2, 3))
        self.assertEqual(4, solution(5, 12))
        self.assertEqual(-1, solution(5, 31168))
        self.assertEqual(4, solution(1, 121))
        self.assertEqual(4, solution(5, 3025))
        self.assertEqual(5, solution(5, 3125))
        self.assertEqual(2, solution(9, 0))