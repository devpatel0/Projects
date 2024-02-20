// Copyright [2022] <Dev Patel>
  #include "EDistance.h"

int main(int argc, const char* argv[]) {
sf::Clock clock;
  sf::Time t;

  std::string s1, s2;
  std::cin >> s1 >> s2;

  ED test(s1, s2);

  std::cout << "Edit Distance = " << test.OptDistance() << std::endl;
  std::cout << test.Alignment();

  t = clock.getElapsedTime();

  std::cout << "It took you this much time: " << t.asSeconds() << "seconds" << std::endl;
}
