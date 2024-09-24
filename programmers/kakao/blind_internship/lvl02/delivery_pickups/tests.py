import unittest

from main import solution

class TestSolution(unittest.TestCase):
    def test_solution(self):
        self.assertEqual(2, solution(4, 1, [2], [3]))
        self.assertEqual(4, solution(4, 2, [1, 2], [1, 2]))
        self.assertEqual(6, solution(4, 2, [4, 4], [4, 4]))
        self.assertEqual(6, solution(4, 2, [1, 2], [4, 4]))
        self.assertEqual(30, solution(2, 7, [1, 0, 2, 0, 1, 0, 2], [0, 2, 0, 1, 0, 2, 0]))
        self.assertEqual(16, solution(4, 5, [1, 0, 3, 1, 2], [0, 3, 0, 4, 0]))
