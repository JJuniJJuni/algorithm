import unittest
from main import solution

class TestSolution(unittest.TestCase):
    def test_solution(self):
        self.assertEqual(solution([1, 5, 2, 6, 3, 7, 4], [[2, 5, 3], [4, 4, 1], [1, 7, 3]]), [5, 6, 3])