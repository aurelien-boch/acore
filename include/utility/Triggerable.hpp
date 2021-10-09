#ifndef TRIGGERABLE_HPP
#define TRIGGERABLE_HPP

#include <cstdint>

namespace acore::utility
{
    /**
     * make all class manipulating a fd canonical
     */
    class Triggerable
    {
        public:
            /**
             * @param fd This parameter refers to the file descriptor to be stored in the class.
             * @param epoll_event This parameter refers to the event to watch using epoll.
             */
            Triggerable(int fd, std::uint32_t epoll_event) noexcept;

            ~Triggerable() = default;

            /**
             * @brief Method that returns the file descriptor stored in class.
             * @return The file descriptor.
             */
            [[nodiscard]] int getNativeHandle() const noexcept;

        protected:

            /**
             * @brief This member variable refers to the file descriptor to be managed.
             */
            int _fd;

            /**
             * @brief This member variable refers to the event to watched using epoll.
             */
            std::uint32_t _epoll_event;
    };
}

#endif //TRIGGERABLE_HPP
