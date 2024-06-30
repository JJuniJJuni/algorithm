import unittest
from main import solution
class TestSolution(unittest.TestCase):
    def test_solution(self):
        self.assertEqual(4000, solution([[60, 50], [30, 70], [60, 30], [80, 40]]))
        self.assertEqual(120, solution([[10, 7], [12, 3], [8, 15], [14, 7], [5, 15]]))
        self.assertEqual(133, solution([[14, 4], [19, 6], [6, 16], [18, 7], [7, 11]]))