#ifndef TRIGGERFD_HPP
#define TRIGGERFD_HPP

#include "Triggerable.hpp"
#include "sys/epoll.h"


namespace acore::utility
{
    /**
     * todo doc
     */
    class TriggerFd : public Triggerable
    {
        public:
            /**
             *
             */
            enum class WatchType
            {
                READ = EPOLLIN,
                WRITE = EPOLLOUT
            };

            /**
             *
             * @param watchMode
             * @param fd
             * @param closeOnDestruct
             */
            TriggerFd(WatchType watchMode, int fd, bool closeOnDestruct = false) noexcept;

            ~TriggerFd();

            /**
             *
             * @return
             */
            [[nodiscard]] WatchType getWatchType() const noexcept;

        private:
            bool _closeOnDestruct;
    };
}

#endif //TRIGGERFD_HPP
