import unittest
from main import solution

class TestSolution(unittest.TestCase):
    def test_solution(self):
        self.assertEqual(8, solution([[3], [5, 4]]))
        self.assertEqual(15, solution([[7], [3, 8]]))
        self.assertEqual(18, solution([[7], [3, 8], [8, 1, 0]]))
        self.assertEqual(30, solution([[7], [3, 8], [8, 1, 0], [2, 7, 4, 4], [4, 5, 2, 6, 5]]))