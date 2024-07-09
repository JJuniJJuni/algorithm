from unittest import TestCase
from main import solution

class TestSolution(TestCase):
  def test_solution(self):
    self.assertEqual("6210", solution([6, 10, 2]))
    self.assertEqual("9534330", solution([3, 30, 34, 5, 9]))
    self.assertEqual("222222010", solution([22, 10, 20, 222]))
    self.assertEqual("1111111101011010010000", solution([1000, 111, 110, 101, 100, 11, 10, 1, 0]))
    self.assertEqual("9799797881881817", solution([979, 97, 978, 81, 818, 817]))