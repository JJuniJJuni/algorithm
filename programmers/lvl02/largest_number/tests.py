from unittest import TestCase
from main import solution

class TestSolution(TestCase):
  def test_solution(self):
    self.assertEqual("6210", solution([6, 10, 2]))
    self.assertEqual("9534330", solution([3, 30, 34, 5, 9]))