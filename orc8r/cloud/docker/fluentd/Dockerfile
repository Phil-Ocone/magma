FROM fluent/fluentd:edge
USER root
RUN ["gem", "install", "fluent-plugin-elasticsearch", "--no-document", "--version", "3.5.5"]
RUN ["fluent-gem", "install", "fluent-plugin-multi-format-parser"]
USER fluent