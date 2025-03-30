#include <crow.h>
#include <iostream>

int main() {

    crow::SimpleApp app{};

    // auto my_func = []() {
    //     /* Code */
    //     std::cout << "Hello Lambda ..." << '\n';
    // };

    // my_func();


    CROW_ROUTE(app, "/hello")
    ([]() {
        /* Code */
        std::string message{"\nHello World\n"};
        crow::response resp{};
        resp.body.append(message);
        resp.code = 200;
        return resp;
    });

    app.port(18080).multithreaded().run_async();

    std::cout << "\n #(21:02:28): The End ..." << std::endl;
    return (EXIT_SUCCESS);
}
