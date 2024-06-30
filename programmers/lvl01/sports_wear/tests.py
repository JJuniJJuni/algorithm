import unittest
from main import solution


class TestSolution(unittest.TestCase):
    def test_solution(self):
        self.assertEqual(5, solution(5, [2, 4], [1, 3, 5]))
        self.assertEqual(4, solution(5, [2, 4], [3]))
        self.assertEqual(2, solution(3, [3], [1]))
        self.assertEqual(4, solution(5, [5, 3], [4, 2]))
