(make-package :slot-accessor-name :use '(:cl) :nicknames '(:s-a-n))
(make-package :walker :use '(:cl))
(make-package :iterate :use '(:cl :walker))
(make-package :pcl :use '(:cl :iterate :walker))
