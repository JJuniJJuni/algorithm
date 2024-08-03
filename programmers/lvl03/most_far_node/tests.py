from unittest import TestCase
from main import solution

class TestSolution(TestCase):
    def test_solution(self):
        self.assertEqual(1, solution(2, [[1, 2]]))
        self.assertEqual(2, solution(3, [[1, 2], [1, 3]]))
        self.assertEqual(1, solution(4, [[4, 3], [3, 2], [1, 3], [1, 2], [2, 4]]))
        self.assertEqual(3, solution(6, [[4, 3], [3, 2], [1, 3], [1, 2], [2, 4], [5, 2], [3, 6]]))
