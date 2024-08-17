FROM fluent/fluentd:v1.17.0-1.0
USER root
RUN ["gem", "install", "fluent-plugin-elasticsearch", "--no-document", "--version", "3.5.5"]
RUN ["fluent-gem", "install", "fluent-plugin-multi-format-parser"]
USER fluent