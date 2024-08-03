from unittest import TestCase
from main import solution

class TestSolution(TestCase):
    def test_solution(self):
        self.assertEqual(2, solution(2, [[1, 0], [0, 1]]))
        self.assertEqual(2, solution(3, [[1, 1, 0], [1, 1, 0], [0, 0, 1]]))
        self.assertEqual(2, solution(3, [[1, 1, 0], [1, 1, 0], [0, 0, 1]]))
        self.assertEqual(1, solution(3, [[1, 1, 0], [1, 1, 1], [0, 1, 1]]))