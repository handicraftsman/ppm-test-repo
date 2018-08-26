#include <particlepm.hpp>

PPM_PACKAGE(p) {
  p->name("ppm-test-repo");
  p->version(PPM::Version("v0.1.0"));
  p->description("Ignore this please");
  p->github(PPM::GitHub("handicraftsman", "ppm-test-repo"));
  p->license(PPM::License("UNLICENSED", ""));

  PPM::GitHubPtr ppm_d = p->github_repo("handicraftsman", "ppm-test-repo", std::vector<PPM::Selector> {
    PPM::Selector::greatere(PPM::Version("v0.1.0")),
  });
}