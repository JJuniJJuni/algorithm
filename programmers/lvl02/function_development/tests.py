from unittest import TestCase
from main import solution

class TestSolution(TestCase):
    def test_solution(self):
        self.assertEqual([1, 2], solution([99, 98, 99], [1, 1, 1]))
        self.assertEqual([2, 1], solution([93, 30, 55], [1, 30, 5]))
        self.assertEqual([1, 3, 2], solution([95, 90, 99, 99, 80, 99], [1, 1, 1, 1, 1, 1]))