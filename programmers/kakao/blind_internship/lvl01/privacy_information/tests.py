import unittest
from main import *

class TestSolution(unittest.TestCase):
    def test_add_term_to_privacy(self):
        self.assertEqual("2019.05.28", add_term_to_privacy("5", "2019.01.01"))
        self.assertEqual("2020.01.01", add_term_to_privacy("12", "2019.01.02"))
        self.assertEqual("2019.12.01", add_term_to_privacy("11", "2019.01.02"))
        self.assertEqual("2020.02.14", add_term_to_privacy("3", "2019.11.15"))
        self.assertEqual("2020.01.01", add_term_to_privacy("5", "2019.08.02"))
        self.assertEqual("2019.11.28", add_term_to_privacy("5", "2019.07.01"))
        self.assertEqual("2019.03.27", add_term_to_privacy("3", "2018.12.28"))
        self.assertEqual("2021.12.27", add_term_to_privacy("23", "2020.01.28"))

    def test_solution(self):
        self.assertEqual([1], solution("2022.05.19", ["A 6"], ["2021.05.02 A"]))
        self.assertEqual([1], solution("2022.05.19", ["A 6", "B 12"], ["2021.05.02 A", "2021.07.01 B"]))
        self.assertEqual([1, 3], solution("2022.05.19", ["A 6", "B 12", "C 3"]
                                       , ["2021.05.02 A", "2021.07.01 B", "2022.02.19 C", "2022.02.20 C"]))
        self.assertEqual([1, 4, 5], solution("2020.01.01", ["Z 3", "D 5"]
                                       , ["2019.01.01 D", "2019.11.15 Z", "2019.08.02 D", "2019.07.01 D", "2018.12.28 Z"]))
        self.assertEqual([1], solution("2022.02.28", ["A 23"], ["2020.01.28 A"]))
